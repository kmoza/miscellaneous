//kernel - adding two matrices MatA and MatB

__global__ void MatAdd(float MatA[N][N], float MatB[N][N]), float MatC[N][N])
{
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    int j = blockIdx.y * blockDim.y + threadIdx.y;
    if(i<N && j < N)
    {
        MatC[i][j]=MatA[i][j] + MatB[i][j];
    }
}

int main()
{
    //Matrix Addition kernel
    dim3 threadsPerBlock(16,16);
    dim3 numBlocks(N+threadsPerBlock.x-1)/threadsPerBlock.x, (N+threadsPerBlock.y-1)/threadsPerBlock.y);
    MatAdd<<<numBlocks, threadsPerBlock>>>(MatA, MatB, MatC)
}
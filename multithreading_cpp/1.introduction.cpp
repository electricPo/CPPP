//process & thread

//process -> 관리단위 
//process의 연산 흐름은 1개 -> thread도 1개
//if) process에서 연산흐름(코드실행)이 여러개일 때 -> Multithreading

//컴퓨터)
//유저      process(연산코드) -> 연산수행 -> cpu + [연습장(RAM + HDD)]virtual memory
//운영체제: os -> 메모리 지정(virtual memory)
//하드웨어: 전산자원 cpu -> 0 1 2 3 + [RAM(주기억장치)]physical memory 
//                                   cf. HDD (2차 메모리)

//process(작업)은 최소 1개의 thread(연산의 단위, 주체)가 존재한다
//OS는 Virtual memory(제한된 공간)를 process에게 할당한다
//->process에 속한 모든 thread는 process의 virtual memory로 공간이 제약된다

//Multi threading -> 동시성 + 동기화
//process: 한 가구          [집(공간)->virtual memory
                        // 세대원: 3인 -> thread
                        // 방 1 2 3(각자 사용) -> [Stack(구조)] TLS (thread local storage)
                        // 거실(공용공간) -> [heap(구조)]]

//운영체제의 설계철학    윈도우: thraed 위주
//                     리눅스: process 위주
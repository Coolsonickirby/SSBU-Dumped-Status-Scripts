
void FUN_71000070b0(long param_1)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::L2CValue(aLStack64,0x5ecd55cc6);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0x992785806);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_71000074fc;
  }
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xe);
  lib::L2CValue::L2CValue(aLStack112,0x1172a49252);
  lib::L2CValue::L2CValue(aLStack128,0x12eb883276);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator-(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator<(aLStack64,aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0xdd6a7ece7);
    lib::L2CValue::L2CValue(aLStack160,0x134839bc7c);
    lib::L2CValue::L2CValue(aLStack176,0x11770b8ae3);
    lib::L2CValue::L2CValue(aLStack192,aLStack96);
    FUN_7100007710(param_1,aLStack144,aLStack160,aLStack176,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack208,0xd4faebd5d);
    lib::L2CValue::L2CValue(aLStack224,0x13f5f3d0b2);
    lib::L2CValue::L2CValue(aLStack240,0x11eee9ece2);
    lib::L2CValue::L2CValue(aLStack256,aLStack96);
    FUN_7100007710(param_1,aLStack208,aLStack224,aLStack240,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack272,0xd38a98dcb);
    lib::L2CValue::L2CValue(aLStack288,0x1328650937);
    lib::L2CValue::L2CValue(aLStack304,0x112f673322);
    lib::L2CValue::L2CValue(aLStack320,aLStack96);
    FUN_7100007710(param_1,aLStack272,aLStack288,aLStack304,aLStack320);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack336,0xd02e6d338);
    lib::L2CValue::L2CValue(aLStack352,0x13e510d590);
    lib::L2CValue::L2CValue(aLStack368,0x119222b401);
    lib::L2CValue::L2CValue(aLStack384,aLStack96);
    FUN_7100007710(param_1,aLStack336,aLStack352,aLStack368,aLStack384);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack400,0xd9bef8282);
    lib::L2CValue::L2CValue(aLStack416,0x1358dab95e);
    lib::L2CValue::L2CValue(aLStack432,0x110bc0d200);
    lib::L2CValue::L2CValue(aLStack448,aLStack96);
    FUN_7100007710(param_1,aLStack400,aLStack416,aLStack432,aLStack448);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack464,0xdece8b214);
    lib::L2CValue::L2CValue(aLStack480,0x13854c60db);
    lib::L2CValue::L2CValue(aLStack496,0x11ca4e0dc0);
    lib::L2CValue::L2CValue(aLStack512,aLStack96);
    FUN_7100007710(param_1,aLStack464,aLStack480,aLStack496,aLStack512);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71000074fc:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}


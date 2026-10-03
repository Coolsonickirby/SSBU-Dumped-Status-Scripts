
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014d80(long param_1)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_BACK_ANGLE);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  uVar2 = lib::L2CValue::operator<(aLStack48,aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xe);
    lib::L2CValue::L2CValue(aLStack80,pLVar3);
    lib::L2CValue::L2CValue(aLStack48,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0xb4d12a7cd);
    uVar2 = lib::L2CValue::as_integer(aLStack48);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack48);
    uVar2 = lib::L2CValue::operator<(aLStack80,aLStack96);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator/(aLStack80,aLStack96);
      lib::L2CValue::L2CValue(aLStack128,aLStack64);
      lib::L2CValue::L2CValue(aLStack48,1.0);
      lib::L2CValue::operator-(aLStack48,aLStack112);
      lib::L2CValue::~L2CValue(aLStack48);
      FUN_7100014fd0(param_1,aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100087c40(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_LINE_LENGTH);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_PULL_SPEED);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar3 = lib::L2CValue::operator<(aLStack96,aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0.0);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    else {
      lib::L2CValue::operator-(aLStack80,aLStack96);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator+(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_LINE_LENGTH);
    fVar4 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}


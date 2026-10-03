
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c830(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_KOOPAJR_SHADOWMARIO_INSTANCE_WORK_ID_FLAG_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KOOPAJR_SHADOWMARIO_INSTANCE_WORK_ID_FLOAT_OFFSET_Y)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator+(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KOOPAJR_SHADOWMARIO_INSTANCE_WORK_ID_FLOAT_OFFSET_Y)
      ;
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100006160(L2CFighterMiigunner *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_ST_INIT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,false);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x22);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT3_FLAG_SPECIAL_S_SMASH_DASH);
  lib::L2CValue::operator&(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_S3_1_AIR);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_S3_2_AIR);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_S3_1_GROUND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_S3_2_GROUND);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}


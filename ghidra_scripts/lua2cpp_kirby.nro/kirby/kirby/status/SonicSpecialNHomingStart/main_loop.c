
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SonicSpecialNHomingStart_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_STATUS_SPECIAL_N_HOMING_FLAG_TARGET_EXITST);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SONIC_SPECIAL_N_FAIL);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_INSTANCE_WORK_INT_SPECIAL_N_STATUS_KIND_NEXT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_SONIC_STATUS_SPECIAL_N_HOMING_FLAG_HAS_TARGET_ARTICLE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack112);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SONIC_GENERATE_ARTICLE_HOMINGTARGET);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_SONIC_STATUS_SPECIAL_N_HOMING_FLAG_HAS_TARGET_ARTICLE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_SONIC_SPECIAL_N_HOMING);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_INSTANCE_WORK_INT_SPECIAL_N_STATUS_KIND_NEXT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x1cc2aad0e5);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_INSTANCE_WORK_INT_SPECIAL_N_STATUS_KIND_NEXT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,aLStack80);
    lib::L2CValue::L2CValue(aLStack112,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


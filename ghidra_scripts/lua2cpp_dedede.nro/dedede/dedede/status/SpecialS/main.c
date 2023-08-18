
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialS_main(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  long lVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_S_GET);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack128);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_CONTINUE_MOT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_GORDO_THROW_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) goto LAB_71000159ac;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_PUTOUT_FAILURE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_GENERATE_ARTICLE_GORDO);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ArticleModule__is_generatable_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_PUTOUT_FAILURE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_GET_LOST);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_71000159ac;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_GENERATE_ARTICLE_GORDO);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_GORDO_THROW_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
    }
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_71000159ac:
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_GENERATE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_FLAG_PUTOUT_OK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_PERSONAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf3c6351ed);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_WORK_INT_MOTION_GROUND);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1337fadc39);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_GORDO_THROW_WORK_INT_MOTION_AIR);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100029a30(this);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    FUN_7100029fb0(aLStack96,this);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x14);
  lib::L2CValue::L2CValue(aLStack80,&LAB_710002a370);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::SpecialHiFall_init(L2CFighterLuigi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  long lVar4;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL_AERIAL);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xd62c95085);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_F);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xd65a4949c);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_B);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
      goto LAB_7100003818;
    }
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_HI_FALL);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0xeb45f04ee);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_F);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xeb332c0f7);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_B);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_INT_ENTRY_ID);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      fVar6 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_MA_MSC_FIGHTER_AUDIENCE_CHECK_TUMULT_FALL_SPECIAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      iVar1 = app::sv_fighter_audience::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack144,iVar1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xc016dd1c6);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__req_common_impl(this->moduleAccessor,HVar5,0.0);
      goto LAB_7100003820;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x662f2ec10);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_F);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x6659f2809);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_B);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
LAB_7100003818:
    lib::L2CValue::_L2CValue(aLStack144);
LAB_7100003820:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_FALL_WORK_INT_MOTION_KIND_2ND);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_FALL_WORK_FLOAT_MOTION_VALUE);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_kinetic_energy::mul_x_speed_max(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_WALK);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_RUN);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DASH);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_7100003a40;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_FALL_FLAG_FROM_GROUND);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100003a40:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


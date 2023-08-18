
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLw_end(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_TURN);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_HIT);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_LANDING_1);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_LANDING_2);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
          iVar1 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
          lib::L2CValue::L2CValue(aLStack112,0x104481c1ad);
          lib::L2CValue::L2CValue(aLStack128,true);
          lib::L2CValue::L2CValue(aLStack144,true);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
          lib::L2CValue::L2CValue(aLStack128,0x1bad643cbb);
          lib::L2CValue::L2CValue(aLStack144,true);
          lib::L2CValue::L2CValue(aLStack160,true);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
          lib::L2CValue::L2CValue(aLStack144,0x148d4eb02d);
          lib::L2CValue::L2CValue(aLStack160,true);
          lib::L2CValue::L2CValue(aLStack176,true);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
          app::lua_bind::MotionAnimcmdModule__enable_skip_delay_update_impl(this->moduleAccessor);
        }
      }
    }
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_TURN);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_LANDING_1);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_710001a650;
  }
  fVar4 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_SUSPEND_MOTION_FRAME);
  fVar4 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  fVar4 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_SUSPEND_MOTION_RATE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
LAB_710001a650:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


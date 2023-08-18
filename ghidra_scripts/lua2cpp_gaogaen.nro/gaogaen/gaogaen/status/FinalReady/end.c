
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::FinalReady_end(L2CFighterGaogaen *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_KIND_FINAL_SCENE01);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_GENERATE_ARTICLE_ROPE2);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    pLVar2 = aLStack96;
  }
  else {
    fVar4 = (float)app::lua_bind::PostureModule__owner_scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar4);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_OWNER_SCALE);
    fVar4 = (float)lib::L2CValue::as_number(aLStack96);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar4 = (float)app::lua_bind::PostureModule__base_scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar4);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_WORK_ID_FLOAT_FINAL_SCALE);
    fVar4 = (float)lib::L2CValue::as_number(aLStack96);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::PostureModule__set_owner_scale_impl(this->moduleAccessor,fVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar4 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar4,false);
    pLVar2 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar2);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


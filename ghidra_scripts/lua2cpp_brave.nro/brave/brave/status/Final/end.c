
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBrave::status::Final_end(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  Hash40 HVar6;
  long lVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL_DONE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_FINAL_MODULE_START_EXIT);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Brave::call_final_module(pFVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_FINAL_READY);
  uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    app::lua_bind::EffectModule__remove_all_after_image_impl(this->moduleAccessor,0,0);
    lib::L2CValue::L2CValue(aLStack80,0x16b1cdd55b);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar6,true,true);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_EFFECT_KIND_LIGHTNING_SWORD_FLARE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,lVar7);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar6,true,true);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL_DONE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


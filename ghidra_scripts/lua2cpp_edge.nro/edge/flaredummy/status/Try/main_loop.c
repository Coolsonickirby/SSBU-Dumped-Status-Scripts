
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlaredummy::status::Try_main_loop(L2CWeaponEdgeFlaredummy *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  FUN_710002f8d0(aLStack128,this);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar2 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar2 & 1) != 0) {
    while( true ) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack144);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack128,iVar1);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar2 = lib::L2CValue::operator_(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar2 & 1) == 0) break;
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLARE2_STATUS_KIND_END);
      pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      app::WeaponSpecializer_EdgeFlaredummy::change_status_first(pBVar3,iVar1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_GENERATE_ARTICLE_FLARE2);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::ArticleModule__get_num_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar2 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) == 0) {
    FUN_710002fb30(aLStack112,this);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


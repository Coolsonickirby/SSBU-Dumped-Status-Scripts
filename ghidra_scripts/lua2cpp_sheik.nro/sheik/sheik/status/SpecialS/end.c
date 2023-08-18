
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterSheik::status::SpecialS_end(L2CFighterSheik *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_FAIL);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  this_00 = &this->globalTable;
  if ((uVar5 & 1) == 0) goto LAB_71000108d8;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_S_HOLD);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_S_FIRE);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_71000104d4;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,90.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::ItemModule__drop_item_impl(this->moduleAccessor,fVar8,fVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHEIK_GENERATE_ARTICLE_EXPLOSIONBOMB);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_71000108d8;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_GENERATE_ARTICLE_EXPLOSIONBOMB);
    lib::L2CValue::L2CValue(aLStack128,_ITEM_EXPLOSIONBOMB_ACTION_MISFIRE);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::ArticleModule__set_item_action_impl(this->moduleAccessor,iVar3,iVar4,fVar8);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar6 = aLStack128;
  }
  else {
LAB_71000104d4:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_71000108d8;
    lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_ITEM_THROW_ITEM);
    lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0xb22666bce);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0xb2dc1d031);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
    lib::L2CValue::L2CValue(aLStack272,true);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_module_access::item(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack160,1);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar6 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000108d8:
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_S_HOLD);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    FUN_710001dce0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


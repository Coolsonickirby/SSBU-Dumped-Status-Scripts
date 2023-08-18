
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::AttackS3_end(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,pLVar4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_GENERATE_ARTICLE_PARTNER);
  lua2cpp::L2CFighterCommon::sub_remove_exist_article_at_status_end
            (this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) goto LAB_710001896c;
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_ATTACK_WORK_INT_ITEM_HOLD_KIND_BACKUP);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ITEM_HOLD_KIND_GRIP);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ITEM_HOLD_KIND_HAVE);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) goto LAB_71000188b8;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ITEM_HOLD_KIND_PICKUP);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) goto LAB_71000188b8;
  }
  else {
LAB_71000188b8:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_ATTACK_FLAG_ITEM_HOLD_KIND_BACKUP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0x2508b59a2b);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710001896c:
  lua2cpp::L2CFighterCommon::status_end_AttackS3(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


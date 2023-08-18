
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::AttackS3_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) goto LAB_710001a820;
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar2 = lib::L2CValue::as_integer(this_00);
  iVar3 = app::sv_battle_object::get_item_hold_kind(uVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_ATTACK_WORK_INT_ITEM_HOLD_KIND_BACKUP);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ITEM_HOLD_KIND_GRIP);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ITEM_HOLD_KIND_HAVE);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) goto LAB_710001a734;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ITEM_HOLD_KIND_PICKUP);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) goto LAB_710001a734;
  }
  else {
LAB_710001a734:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_ATTACK_FLAG_ITEM_HOLD_KIND_BACKUP);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_ATTACK_FLAG_ITEM_HOLD_KIND_BACKUP);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,0x2500378d6d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710001a820:
  lua2cpp::L2CFighterCommon::status_AttackS3_Main(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


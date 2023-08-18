
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKoopag::status::Final_main(L2CFighterKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  uchar uVar2;
  HitStatus HVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
  HVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_ATTACH_ITEM_GROUP_BODY);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ItemModule__drop_attach_group_impl(this->moduleAccessor,uVar2,90.0,0.0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack112,0x193403f336);
  uVar6 = lib::L2CValue::as_integer(aLStack96);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack64,iVar4);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_FINAL_WORK_INT_CHANGE_WAIT_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack64);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,true);
  FUN_7100012c00(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_FINAL_FLAG_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}


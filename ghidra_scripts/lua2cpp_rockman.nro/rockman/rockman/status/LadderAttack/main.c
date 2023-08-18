
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::LadderAttack_main(L2CFighterRockman *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack144;
  lua2cpp::L2CFighterCommon::status_LadderAttack_common(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&FIGHTER_STATUS_KIND_CATCH_WAIT);
    FUN_710000eb30(this,aLStack64,aLStack96,aLStack112,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,LadderAttack_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
    goto LAB_710000b5b8;
  }
  lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xd40042152);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) goto LAB_710000b504;
  }
  else {
LAB_710000b504:
    lib::L2CValue::L2CValue(aLStack96,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,&LAB_7100018460);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  this_00 = aLStack96;
LAB_710000b5b8:
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNanaCondor::status::MoveEnd_main_loop(L2CWeaponNanaCondor *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  float *pfVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined4 local_50 [4];
  
  lib::L2CValue::L2CValue((L2CValue *)local_50,_WEAPON_POPO_CONDOR_INSTANCE_WORK_ID_FLAG_CAN_CATCH);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_50);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)local_50);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    FUN_71000218a0(aLStack160,this,aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_POPO_CONDOR_INSTANCE_WORK_ID_FLAG_CAN_CATCH);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_LINK_NO_CONDOR);
      lib::L2CValue::L2CValue((L2CValue *)local_50,0x1ad348589d);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      HVar4 = lib::L2CValue::as_hash((L2CValue *)local_50);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar4,0);
      lib::L2CValue::_L2CValue((L2CValue *)local_50);
      lib::L2CValue::_L2CValue(aLStack160);
    }
  }
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar5);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar5[2]);
  FUN_710000b240(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  local_50[0] = app::sv_camera_manager::dead_range(this->luaStateAgent);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_50);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)local_50,1.0);
  uVar6 = lib::L2CValue::operator__(aLStack192,(L2CValue *)local_50);
  lib::L2CValue::_L2CValue((L2CValue *)local_50);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x47a67e768);
    uVar6 = lib::L2CValue::operator_(pLVar7,pLVar8);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue((L2CValue *)local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100021780;
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x5b4ca7514);
    uVar6 = lib::L2CValue::operator_(pLVar8,pLVar7);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue((L2CValue *)local_50);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100021780;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100021780:
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


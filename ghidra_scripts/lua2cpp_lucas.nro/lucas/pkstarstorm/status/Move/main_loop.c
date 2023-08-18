
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucasPkstarstorm::status::Move_main_loop
          (L2CWeaponLucasPkstarstorm *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float *pfVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined4 local_100 [4];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  local_100[0] = app::sv_camera_manager::dead_range(this->luaStateAgent);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_100);
  fVar5 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x6895f72a4);
  uVar3 = lib::L2CValue::operator_(aLStack128,pLVar2);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_100,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_100);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_100,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_100);
  fVar5 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  fVar5 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_100,0.0);
  uVar3 = lib::L2CValue::operator_((L2CValue *)local_100,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  if ((uVar3 & 1) == 0) {
LAB_7100029760:
    lib::L2CValue::L2CValue((L2CValue *)local_100,0.0);
    uVar3 = lib::L2CValue::operator_(aLStack160,(L2CValue *)local_100);
    lib::L2CValue::_L2CValue((L2CValue *)local_100);
    if ((uVar3 & 1) == 0) goto LAB_71000297fc;
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x47a67e768);
    uVar3 = lib::L2CValue::operator_(aLStack176,pLVar2);
    if ((uVar3 & 1) == 0) goto LAB_71000297fc;
  }
  else {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x5b4ca7514);
    uVar3 = lib::L2CValue::operator_(pLVar2,aLStack176);
    if ((uVar3 & 1) == 0) goto LAB_7100029760;
  }
  lib::L2CValue::L2CValue((L2CValue *)local_100,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_100);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
LAB_71000297fc:
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)local_100,*pfVar4);
  lib::L2CValue::L2CValue(aLStack240,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar4[2]);
  FUN_7100026040(aLStack208,this,local_100);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)local_100);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_LUCAS_PK_STARSTORM_INSTANCE_WORK_ID_FLOAT_MOVE_DEG);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack272,fVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack304,fVar5);
  uVar6 = lib::L2CValue::as_number(pLVar2);
  uVar7 = lib::L2CValue::as_number(this_00);
  uVar8 = lib::L2CValue::as_number(this_01);
  local_60 = CONCAT44(uVar7,uVar6);
  uStack88 = (ulong)uVar8;
  fVar5 = (float)lib::L2CValue::as_number(aLStack304);
  fVar5 = (float)app::GroundUtility::get_degree_gravity((Vector3f *)&local_60,fVar5);
  lib::L2CValue::L2CValue(aLStack288,fVar5);
  lib::L2CValue::_L2CValue(aLStack304);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack320,fVar5);
  lib::L2CValue::operator_(aLStack288,aLStack320);
  lib::L2CValue::operator_(aLStack272,aLStack304);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::operator_(aLStack272);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack336,fVar5);
  lib::L2CValue::operator_(aLStack320,aLStack336);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack304);
  uVar7 = lib::L2CValue::as_number(aLStack352);
  uVar8 = lib::L2CValue::as_number(aLStack368);
  local_60 = CONCAT44(uVar7,uVar6);
  uStack88 = (ulong)uVar8;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


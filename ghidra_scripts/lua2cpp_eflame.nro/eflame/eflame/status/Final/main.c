
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterEflame::status::Final_main(L2CFighterEflame *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  L2CValue *this_01;
  L2CValue *this_02;
  Fighter *pFVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  ulong local_160;
  ulong uStack344;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue(aLStack304,0xb54dafbfb);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0xe22a27e23);
  uVar4 = lib::L2CValue::as_integer(aLStack304);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  ppBVar10 = &this->moduleAccessor;
  lVar6 = app::lua_bind::WorkModule__get_param_int64_impl(*ppBVar10,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,lVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,0xb54dafbfb);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0x1120d05587);
  uVar4 = lib::L2CValue::as_integer(aLStack304);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack208,0x1157d76511);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,fVar11);
  lib::L2CValue::L2CValue(aLStack240,0xb54dafbfb);
  lib::L2CValue::L2CValue(aLStack256,0x11cede34ab);
  uVar4 = lib::L2CValue::as_integer(aLStack240);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack224,fVar11);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  fVar11 = 0.0;
  lib::L2CValue::L2CValue(aLStack256,0.0);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  uVar4 = lib::L2CValue::as_number((L2CValue *)&local_80);
  lVar6 = lib::L2CValue::as_number(aLStack240);
  uVar12 = lib::L2CValue::as_number(aLStack256);
  local_160 = uVar4 & 0xffffffff | lVar6 << 0x20;
  uStack344 = (ulong)uVar12;
  uVar14 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                     (*ppBVar10,HVar7,(Vector3f *)&local_160);
  lib::L2CValue::L2CValue(aLStack304,(float)uVar14);
  lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar14 >> 0x20));
  lib::L2CValue::L2CValue(aLStack272,fVar11);
  FUN_710000db40(aLStack208,this,aLStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_X);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_Y);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
  fVar13 = 0.0;
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0.0);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_FIGHTER_EFLAME_STATUS_FINAL_FLOAT_MAP_COLL_OFFSET_Z);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x162d277af);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  uVar4 = lib::L2CValue::as_number(pLVar8);
  lVar6 = lib::L2CValue::as_number(this_01);
  uVar12 = lib::L2CValue::as_number(this_02);
  local_80 = uVar4 & 0xffffffff | lVar6 << 0x20;
  uStack120 = (ulong)uVar12;
  uVar14 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                     (*ppBVar10,HVar7,(Vector3f *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,(float)uVar14);
  lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar14 >> 0x20));
  lib::L2CValue::L2CValue(aLStack320,fVar13);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_FIGHTER_EFLAME_STATUS_FINAL_FLAG_UPDATE_GROUND_COLLISION_SHAPE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack304,false);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_160,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    FUN_710000e6a0(aLStack224,this,aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack304,&DAT_710000f490);
  lib::L2CValue::operator_(pLVar8,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_160);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack304);
  app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_ELEMENT_FINAL_MODULE_START_INIT);
  pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  app::FighterSpecializer_EFlame::call_final_module(pFVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack304,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar8,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((uVar4 & 1) == 0) {
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar11);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack304,0xb0b14922f);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack304);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar7,fVar11,fVar13,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack304,0x992785806);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack304);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar7,fVar11,fVar13,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar11);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack304,0x7c783ffd5);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack304);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar7,fVar11,fVar13,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack304,0x5ecd55cc6);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack304);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar10,HVar7,fVar11,fVar13,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack304,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar8,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack304,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar2);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar10,iVar2);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::KineticModule__unable_energy_impl(*ppBVar10,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack304,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack304);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,false);
  FUN_710000e3d0(this,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack304,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack304);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHi_main(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  undefined8 uVar12;
  float in_register_00005008;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack400,BATTLE_OBJECT_CATEGORY_INVALID);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_HIT_OBJECT_CATEGORY);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar10 = &this->moduleAccessor;
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,0x50000000);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_HIT_OBJECT_ID)
  ;
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,BATTLE_OBJECT_CATEGORY_INVALID);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,0x50000000);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue
            (aLStack400,_FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AIR_LASSO_IMMIDIATE);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack128);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack400,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack400);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
    lib::L2CValue::L2CValue(aLStack400,0);
    uVar6 = lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar2);
      lib::L2CValue::L2CValue(aLStack400,fVar11);
      lib::L2CValue::operator_(aLStack128,aLStack400);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
  }
  lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,0xa28f17495);
  lib::L2CValue::L2CValue(aLStack176,0xed8a31e01);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack224,aLStack160);
  lib::L2CValue::L2CValue(aLStack240,aLStack176);
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack400,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack400);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack400,_FIGHTER_MASTER_CLIFF_HANG_DATA_AIR_LASSO_IMMIDIATE);
    uVar4 = lib::L2CValue::as_integer(aLStack400);
    app::lua_bind::GroundModule__select_cliff_hangdata_impl(*ppBVar10,uVar4);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack272,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_CLIFF);
    iVar2 = lib::L2CValue::as_integer(aLStack400);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(*ppBVar10,iVar2);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack400,_FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP);
    iVar2 = lib::L2CValue::as_integer(aLStack400);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack400,0);
    uVar6 = lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack400);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack400,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
      fVar11 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack288,fVar11);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack336,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack352,0x1505fb8abb);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      uVar7 = lib::L2CValue::as_integer(aLStack352);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack320,fVar11);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
      lib::L2CValue::operator_(aLStack288,aLStack304);
      lib::L2CValue::operator_(aLStack288,aLStack400);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      in_register_00005008 = 0.0;
      lib::L2CValue::L2CValue(aLStack400,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack288,aLStack400);
      lib::L2CValue::_L2CValue(aLStack400);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_(aLStack288,aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack400,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack288);
    }
    lib::L2CValue::L2CValue(aLStack400,_FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP);
    iVar2 = lib::L2CValue::as_integer(aLStack400);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar2);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack400,true);
    bVar1 = lib::L2CValue::as_bool(aLStack400);
    app::lua_bind::GroundModule__set_rhombus_modify_air_lasso_impl(*ppBVar10,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue(aLStack400,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack400,_ARTICLE_ID_NONE);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE2_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack320,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack336,0xe22a27e23);
  uVar6 = lib::L2CValue::as_integer(aLStack320);
  uVar7 = lib::L2CValue::as_integer(aLStack336);
  lVar8 = app::lua_bind::WorkModule__get_param_int64_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack304,lVar8);
  lib::L2CValue::L2CValue(aLStack416,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack432,0x1120d05587);
  uVar6 = lib::L2CValue::as_integer(aLStack416);
  uVar7 = lib::L2CValue::as_integer(aLStack432);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack352,fVar11);
  lib::L2CValue::L2CValue(aLStack464,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack480,0x1157d76511);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  uVar7 = lib::L2CValue::as_integer(aLStack480);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack448,fVar11);
  lib::L2CValue::L2CValue(aLStack512,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack528,0x11cede34ab);
  uVar6 = lib::L2CValue::as_integer(aLStack512);
  uVar7 = lib::L2CValue::as_integer(aLStack528);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack496,fVar11);
  HVar9 = lib::L2CValue::as_hash(aLStack304);
  uVar6 = lib::L2CValue::as_number(aLStack352);
  lVar8 = lib::L2CValue::as_number(aLStack448);
  uVar4 = lib::L2CValue::as_number(aLStack496);
  local_70 = uVar6 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar4;
  uVar12 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                     (*ppBVar10,HVar9,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue(aLStack400,(float)uVar12);
  lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar12 >> 0x20));
  lib::L2CValue::L2CValue(aLStack368,in_register_00005008);
  FUN_7100005230(aLStack288,this,aLStack400);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_MAP_COLL_OFFSET_X);
  fVar11 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_MAP_COLL_OFFSET_Y);
  fVar11 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_MAP_COLL_OFFSET_Z);
  fVar11 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack304);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  uVar6 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack320,false);
    FUN_710002f370(aLStack304,this,aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,&DAT_710002f580);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,SpecialHi_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


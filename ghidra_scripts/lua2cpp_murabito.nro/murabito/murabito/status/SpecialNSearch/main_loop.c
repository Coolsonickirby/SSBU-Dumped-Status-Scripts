
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialNSearch_main_loop
          (L2CFighterMurabito *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
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
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack224,0x915c5de42);
  lib::L2CValue::L2CValue(aLStack240,0xd483c0ed2);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_FALL);
  lib::L2CValue::L2CValue(aLStack288,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack304,GROUND_CORRECT_KIND_AIR);
  FUN_710001a2d0(aLStack96,this,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,
                 aLStack304);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_SEARCHING);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar8,fVar9);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_SEARCHING);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_SEARCH);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_AREA_KIND_SEARCH_ITEM);
      lib::L2CValue::L2CValue(aLStack320,true);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack320);
      app::lua_bind::AreaModule__enable_area_impl(*ppBVar8,iVar3,(bool)(bVar1 & 1),-1);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_SEARCH_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar8,fVar9);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_SEARCHING);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::operator_(pLVar5);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_SEARCH_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack336);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack320,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0x50000000);
    uVar6 = lib::L2CValue::operator__(aLStack320,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_SEARCH);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_AREA_KIND_SEARCH_ITEM);
        lib::L2CValue::L2CValue(aLStack320,false);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack320);
        app::lua_bind::AreaModule__enable_area_impl(*ppBVar8,iVar3,(bool)(bVar1 & 1),-1);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_SEARCH_SEARCH_SCH_CLR_ALL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_module_access::search(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_N_FLAG_SEARCH);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar5);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.01);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack320,0x2720155b0b);
      lib::L2CValue::L2CValue(aLStack336,0x5e008fd84);
      lib::L2CValue::L2CValue(aLStack352,2.0);
      lib::L2CValue::L2CValue(aLStack368,0.2);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack336,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
        iVar3 = lib::L2CValue::as_integer(aLStack336);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack320,iVar3);
        lib::L2CValue::L2CValue(aLStack96,0x50000000);
        uVar6 = lib::L2CValue::operator__(aLStack320,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack336);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_N_POCKET);
          lib::L2CValue::operator_(aLStack160,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_N_FAILURE);
          lib::L2CValue::operator_(aLStack160,aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack432,aLStack160);
        lib::L2CValue::L2CValue(aLStack448,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100028310;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_SEARCH_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack352,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack368,0xc81cdff24);
      uVar6 = lib::L2CValue::as_integer(aLStack352);
      uVar7 = lib::L2CValue::as_integer(aLStack368);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack336,iVar3);
      uVar6 = lib::L2CValue::operator__(aLStack336,aLStack96);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack320);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack384,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_N_FAILURE);
        lib::L2CValue::L2CValue(aLStack400,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100028310;
      }
    }
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack320);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_SEARCH_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator_(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator_(aLStack96,aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,2);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack320,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack336,0xfc8fab664);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        uVar7 = lib::L2CValue::as_integer(aLStack336);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        lib::L2CValue::operator_(aLStack176,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack320,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack336,0xfbffd86f2);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        uVar7 = lib::L2CValue::as_integer(aLStack336);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack320,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack336,0xde29e0145);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        uVar7 = lib::L2CValue::as_integer(aLStack336);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar9);
        lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_SEARCH_SEARCH);
        lib::L2CValue::L2CValue(aLStack320,0);
        lib::L2CValue::L2CValue(aLStack336,0);
        lib::L2CValue::L2CValue(aLStack352,0x31ed91fca);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CValue::L2CValue(aLStack480,_COLLISION_KIND_MASK_ATTACK);
        lib::L2CValue::L2CValue
                  (aLStack496,
                   _COLLISION_CATEGORY_MASK_ITEM | _COLLISION_CATEGORY_MASK_FIGHTER |
                   _COLLISION_CATEGORY_MASK_ITEM_E);
        lib::L2CValue::L2CValue(aLStack512,_COLLISION_SITUATION_MASK_GA);
        lib::L2CValue::L2CValue(aLStack528,0);
        lib::L2CValue::L2CValue(aLStack544,_COLLISION_PART_MASK_ALL);
        lib::L2CValue::L2CValue(aLStack560,_HIT_STATUS_MASK_ALL);
        lib::L2CValue::L2CValue(aLStack576,false);
        lib::L2CValue::L2CValue(aLStack592,1);
        lib::L2CValue::L2CValue(aLStack608,false);
        lib::L2CValue::L2CValue(aLStack624,_COLLISION_SHAPE_TYPE_SPHERE);
        FUN_7100028820(aLStack464,this,aLStack96,aLStack320,aLStack336,aLStack352,aLStack128,
                       aLStack368,aLStack112,aLStack176,aLStack480,aLStack496,aLStack512,aLStack528,
                       aLStack544,aLStack560,aLStack576,aLStack592,aLStack608,aLStack624);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack624);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack528);
        lib::L2CValue::_L2CValue(aLStack512);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_SEARCH_SET_OPPONENT);
        lib::L2CValue::L2CValue(aLStack320,0);
        lib::L2CValue::L2CValue(aLStack336,0);
        lib::L2CValue::L2CValue(aLStack352,_COLLISION_TARGET_PROPERTY);
        lib::L2CValue::L2CValue(aLStack368,_COLLISION_PROPERTY_MASK_REFLECT);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
        app::sv_module_access::search(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack640);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::operator_(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_N_INT_SEARCH_STEP);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack320);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100028310:
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


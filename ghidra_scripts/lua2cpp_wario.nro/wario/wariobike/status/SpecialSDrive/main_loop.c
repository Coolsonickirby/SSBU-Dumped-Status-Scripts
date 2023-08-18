
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWarioWariobike::status::SpecialSDrive_main_loop
          (L2CWeaponWarioWariobike *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
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
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::operator_(aLStack160,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLAG_GROUND_F);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLAG_GROUND_R);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      goto LAB_71000258f8;
    }
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLAG_GROUND_C);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((bVar2 & 1U) != 0) goto LAB_7100025908;
  }
  else {
LAB_71000258f8:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
LAB_7100025908:
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::operator_(aLStack160);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack240,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar10);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::operator_(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_AIR_SPEED_Y);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack208,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_AIR_SPEED_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,HVar5);
  lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack224,0xfd048c1ef);
    lib::L2CValue::L2CValue(aLStack240,0x1c7f962406);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar10);
    lib::L2CValue::operator_(aLStack144);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack208,aLStack256);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar8 = aLStack224;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x11bf9ca033);
      uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar6 & 1) != 0) goto LAB_7100025d48;
      lib::L2CValue::L2CValue(aLStack112,0x11bf9ca033);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,1.0);
      lib::L2CValue::L2CValue(aLStack240,false);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
      fVar11 = (float)lib::L2CValue::as_number(aLStack224);
      bVar1 = lib::L2CValue::as_bool(aLStack240);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_MA_MSC_LINK_SEND_EVENT_PARENTS);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack224,0x1eae54c1aa);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_module_access::link(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack208,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_AIR_SPEED_Y);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      pLVar8 = aLStack112;
    }
    lib::L2CValue::_L2CValue(pLVar8);
  }
LAB_7100025d48:
  lib::L2CValue::L2CValue(aLStack112,0x11bf9ca033);
  uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xfcb07f1ed);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,1.0);
      lib::L2CValue::L2CValue(aLStack240,false);
      HVar5 = lib::L2CValue::as_hash(aLStack112);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
      fVar11 = (float)lib::L2CValue::as_number(aLStack224);
      bVar1 = lib::L2CValue::as_bool(aLStack240);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_MA_MSC_LINK_SEND_EVENT_PARENTS);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue(aLStack224,0x2330f1cff8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_module_access::link(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack224,GROUND_TOUCH_FLAG_RIGHT);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar10);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack240);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      goto LAB_710002606c;
    }
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_INT_START_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack272,iVar3);
    lib::L2CValue::L2CValue(aLStack112,1);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack336,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_BUMP);
      lib::L2CValue::L2CValue(aLStack352,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000264d0;
    }
  }
  else {
LAB_710002606c:
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack224,_GROUND_TOUCH_FLAG_LEFT);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack208,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_FLOAT_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar10);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      goto LAB_7100026208;
    }
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_WARIO_WARIOBIKE_STATUS_WORK_INT_START_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack272,iVar3);
    lib::L2CValue::L2CValue(aLStack112,1);
    uVar6 = lib::L2CValue::operator_(aLStack112,aLStack272);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack368,_WEAPON_WARIO_WARIOBIKE_STATUS_KIND_SPECIAL_S_BUMP);
      lib::L2CValue::L2CValue(aLStack384,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000264d0;
    }
  }
  else {
LAB_7100026208:
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)auStack208);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  if ((bVar2 & 1U) != 0) {
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        FUN_7100024440(this);
      }
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        FUN_7100024440(this);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,0xfd048c1ef);
        lib::L2CValue::L2CValue(aLStack224,0x128069f916);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar10);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue(aLStack224,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        fVar10 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar10);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        pLVar8 = aLStack240;
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar8);
        fVar10 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack224,fVar10);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar8);
        lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar8);
        uVar6 = lib::L2CValue::operator_(aLStack240,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        if ((uVar6 & 1) != 0) {
          fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
          lib::L2CValue::L2CValue(aLStack256,fVar10);
          lib::L2CValue::operator_(aLStack112,aLStack256);
          lib::L2CValue::operator_((L2CValue *)auStack208,aLStack240);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack256);
        }
        lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000264d0:
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


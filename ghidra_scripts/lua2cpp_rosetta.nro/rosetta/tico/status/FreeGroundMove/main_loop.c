
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::FreeGroundMove_main_loop
          (L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  Hash40 HVar10;
  long lVar11;
  float fVar12;
  float fVar13;
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
  undefined auStack384 [16];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,0);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
LAB_71000336a4:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) goto LAB_7100033714;
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) goto LAB_71000336a4;
LAB_7100033714:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_GRAVITY);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar5);
      lVar11 = -0x50;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_GRAVITY);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0xaa3c06ee2);
      lib::L2CValue::L2CValue(aLStack128,0x142222b55c);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      uVar9 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack96,iVar5);
      lib::L2CValue::L2CValue
                (aLStack144,_WEAPON_ROSETTA_TICO_STATUS_FREE_GROUND_MOVE_WORK_INT_FALL_FRAME);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar6 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar11 = -0x60;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::operator_(aLStack336,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_ROSETTA_TICO_STATUS_FREE_GROUND_MOVE_WORK_INT_FALL_FRAME);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar5);
    lib::L2CValue::operator_(aLStack288,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar8 = lib::L2CValue::operator_(aLStack96,aLStack288);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,1);
      lib::L2CValue::operator_(aLStack288,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack288,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_ROSETTA_TICO_STATUS_FREE_GROUND_MOVE_WORK_INT_FALL_FRAME);
      iVar5 = lib::L2CValue::as_integer(aLStack288);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::operator_(aLStack336,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack400,true);
  lib::L2CValue::L2CValue(aLStack416,aLStack336);
  lib::L2CValue::L2CValue(aLStack432,false);
  lib::L2CValue::L2CValue(aLStack448,false);
  FUN_710002d130(aLStack96,this,aLStack400,aLStack416,aLStack432,aLStack448);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000345bc;
  }
  lib::L2CValue::L2CValue(aLStack464,true);
  FUN_710002df30(aLStack96,this,aLStack464);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack464);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000345bc;
  }
  HVar10 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar10);
  lib::L2CValue::operator_(aLStack320,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  fVar12 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar12);
  pLVar7 = aLStack96;
  lib::L2CValue::operator_((L2CValue *)auStack368,pLVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar7);
  lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  fVar12 = (float)app::sv_kinetic_energy::get_limit_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar12);
  lib::L2CValue::operator_(aLStack304,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack304);
  lib::L2CValue::L2CValue(aLStack96,0.5);
  uVar8 = lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_JOSTLE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    fVar12 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar12);
    lib::L2CValue::operator_((L2CValue *)auStack384,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack96,-0.001);
    uVar8 = lib::L2CValue::operator_((L2CValue *)auStack384,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.001);
      uVar8 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack384);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) goto LAB_7100033e2c;
    }
    lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)auStack384);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    pLVar7 = aLStack96;
    uVar8 = lib::L2CValue::operator_(aLStack112,pLVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar7);
      uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_COMMON_WORK_FLAG_JOSTLE_WAIT);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack480,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WAIT);
        lib::L2CValue::L2CValue(aLStack496,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000345bc;
      }
    }
  }
LAB_7100033e2c:
  lib::L2CValue::L2CValue(aLStack528,aLStack320);
  lib::L2CValue::L2CValue(aLStack544,(L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0);
  lib::L2CValue::L2CValue(aLStack96,0x9b0247a95);
  uVar8 = lib::L2CValue::operator__(aLStack528,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x83de3b3a5);
    uVar8 = lib::L2CValue::operator__(aLStack528,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) goto LAB_7100033ee0;
LAB_71000342b0:
    lib::L2CValue::L2CValue(aLStack512,0);
  }
  else {
LAB_7100033ee0:
    lib::L2CValue::L2CValue(aLStack96,0x47f9000cf);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0xaa3c06ee2);
    lib::L2CValue::L2CValue(aLStack208,0x1465b27d29);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack96,fVar12);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack544);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x83de3b3a5);
      uVar8 = lib::L2CValue::operator__(aLStack528,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xf88dd68f0);
        lib::L2CValue::operator_(aLStack160,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xe6ad5bb9b);
        lib::L2CValue::operator_(aLStack160,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0xaa3c06ee2);
    lib::L2CValue::L2CValue(aLStack208,0xa8d7b4a3b);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack96,fVar12);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::operator_(aLStack544,aLStack112);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::operator_(aLStack544,aLStack112);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::operator_(aLStack544,aLStack272);
    lib::L2CValue::operator_(aLStack240,aLStack256);
    lib::L2CValue::operator_(aLStack128,aLStack224);
    lib::L2CValue::L2CValue(aLStack96,0.5);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack208);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar12);
    lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar7);
    uVar8 = lib::L2CValue::operator__(aLStack96,aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar8 & 1) == 0) goto LAB_71000342b0;
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_FREE_BRAKE_WORK_INT_FRAME);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    iVar6 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_FREE_BRAKE_WORK_INT_MOTION);
    lVar11 = lib::L2CValue::as_integer(aLStack160);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar11,iVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_BRAKE);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + 'P'));
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack512,1);
  }
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack512);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000345bc;
  }
  lib::L2CValue::L2CValue(aLStack560,(L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::L2CValue(aLStack576,aLStack320);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
  lib::L2CValue::L2CValue(aLStack144,0x125c955056);
  uVar8 = lib::L2CValue::as_integer(aLStack128);
  uVar9 = lib::L2CValue::as_integer(aLStack144);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack96,fVar12);
  uVar8 = lib::L2CValue::operator__(aLStack96,aLStack560);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x9b0247a95);
    lib::L2CValue::operator_(aLStack112,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x83de3b3a5);
    lib::L2CValue::operator_(aLStack112,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  uVar8 = lib::L2CValue::operator__(aLStack576,aLStack112);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x9b0247a95);
    uVar8 = lib::L2CValue::operator__(aLStack576,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
LAB_710003447c:
      lib::L2CValue::L2CValue(aLStack96,0x83de3b3a5);
      uVar8 = lib::L2CValue::operator__(aLStack576,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x9b0247a95);
        uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar8 & 1) != 0) goto LAB_71000344dc;
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar10 = lib::L2CValue::as_hash(aLStack112);
      fVar12 = (float)lib::L2CValue::as_number(aLStack96);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      bVar3 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar3 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x83de3b3a5);
      uVar8 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) goto LAB_710003447c;
LAB_71000344dc:
      HVar10 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar10,-1.0,1.0,0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000345bc:
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  return;
}


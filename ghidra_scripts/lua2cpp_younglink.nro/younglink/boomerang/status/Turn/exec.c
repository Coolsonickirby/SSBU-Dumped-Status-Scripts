
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponYounglinkBoomerang::status::Turn_exec
          (L2CWeaponYounglinkBoomerang *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *in_x2;
  float fVar7;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack368);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_((L2CValue *)auStack256,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue(aLStack384,_LINK_NO_ARTICLE);
  iVar2 = lib::L2CValue::as_integer(aLStack384);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__((L2CValue *)auStack368,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack416,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLAG_REFLECT);
    iVar2 = lib::L2CValue::as_integer(aLStack416);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack400,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    if ((uVar4 & 1) == 0) goto LAB_7100021d8c;
    lib::L2CValue::L2CValue(aLStack384,_WN_LINK_BOOMERANG_TURN_WORK_INT_FOLLOW_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack384);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack368,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator_(aLStack80,(L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    if ((uVar4 & 1) == 0) goto LAB_7100021d8c;
    lib::L2CValue::L2CValue(aLStack80,0x51a36341b);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack368,_FL_MA_MSC_LINK_GET_PARENT_MODEL_NODE_GLOBAL_POSITION_X);
    lib::L2CValue::L2CValue(aLStack384,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack400,true);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
    app::FL_sv_module_access::link(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack368,_FL_MA_MSC_LINK_GET_PARENT_MODEL_NODE_GLOBAL_POSITION_Y);
    lib::L2CValue::L2CValue(aLStack384,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack400,true);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
    app::FL_sv_module_access::link(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack336,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack208);
    lib::L2CValue::operator_(aLStack320,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack144,aLStack336);
    lib::L2CValue::operator_((L2CValue *)auStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CAgent::math_atan((L2CAgent *)auStack240,aLStack320,in_x2);
    lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
    uVar4 = lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      uVar4 = lib::L2CValue::operator_
                        ((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES,
                         (L2CValue *)(auStack368 + 0x10));
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,2.0);
        lib::L2CValue::operator_((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack384);
        lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack368);
        goto LAB_71000224f4;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,2.0);
      lib::L2CValue::operator_((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),aLStack384);
      lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack368);
LAB_71000224f4:
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::_L2CValue(aLStack384);
    }
    lib::L2CValue::operator_((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack256);
    lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES);
    uVar4 = lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      uVar4 = lib::L2CValue::operator_
                        ((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES,aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,2.0);
        lib::L2CValue::operator_((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::operator_(aLStack176,aLStack384);
        lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack368);
        goto LAB_71000225f4;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,2.0);
      lib::L2CValue::operator_((L2CValue *)&GROUND_CLIFF_CHECK_KIND_ON_DROP_BOTH_SIDES,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack176,aLStack384);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)auStack368);
LAB_71000225f4:
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::_L2CValue(aLStack384);
    }
    lib::L2CValue::L2CValue(aLStack384,0xf39cee014);
    lib::L2CValue::L2CValue(aLStack400,0xaa89b626d);
    pLVar6 = (L2CValue *)lib::L2CValue::as_integer(aLStack384);
    uVar4 = lib::L2CValue::as_integer(aLStack400);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,(ulong)pLVar6,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar7);
    lib::L2CAgent::math_rad((L2CAgent *)auStack368,pLVar6);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    uVar4 = lib::L2CValue::operator_(aLStack112,aLStack176);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::operator_(aLStack112);
      uVar4 = lib::L2CValue::operator_(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator_(aLStack112);
        lib::L2CValue::operator_(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    else {
      lib::L2CValue::operator_(aLStack176,aLStack112);
    }
    lib::L2CValue::operator_((L2CValue *)auStack256,aLStack176);
    lib::L2CValue::operator_((L2CValue *)auStack256,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack256,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_ANGLE);
    fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack368);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOOMERANG_TURN_WORK_INT_FOLLOW_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
    pLVar6 = aLStack80;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    pLVar6 = aLStack384;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_7100021d8c:
  lib::L2CValue::L2CValue((L2CValue *)auStack368,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack368);
  fVar7 = (float)app::sv_kinetic_energy::get_speed_length(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack384,0x55dfc36e5);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
  uVar5 = lib::L2CValue::as_integer(aLStack384);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack288,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::operator_(aLStack128,aLStack288);
  lib::L2CValue::operator_(aLStack192,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack384,0x99f2bb267);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
  uVar5 = lib::L2CValue::as_integer(aLStack384);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue(aLStack384,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack400,0x9ab5fb14f);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar5 = lib::L2CValue::as_integer(aLStack400);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar7);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack368);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  pLVar6 = aLStack192;
  uVar4 = lib::L2CValue::operator_(aLStack160,pLVar6);
  if ((uVar4 & 1) != 0) {
    pLVar6 = aLStack160;
    lib::L2CValue::operator_(aLStack192,pLVar6);
  }
  lib::L2CAgent::math_cos((L2CAgent *)auStack256,pLVar6);
  lib::L2CValue::operator_((L2CValue *)auStack368,aLStack192);
  pLVar6 = aLStack80;
  lib::L2CValue::operator_(aLStack272,pLVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CAgent::math_sin((L2CAgent *)auStack256,pLVar6);
  lib::L2CValue::operator_((L2CValue *)auStack368,aLStack192);
  lib::L2CValue::operator_(aLStack304,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_TURN_DIST);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar7);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_((L2CValue *)auStack368,aLStack192);
  lib::L2CValue::operator_((L2CValue *)auStack368,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_((L2CValue *)auStack368,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOOMERANG_INSTANCE_WORK_ID_FLOAT_TURN_DIST);
  fVar7 = (float)lib::L2CValue::as_number(aLStack384);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue(aLStack416,0xf39cee014);
  lib::L2CValue::L2CValue(aLStack432,0x10b7f026d1);
  uVar4 = lib::L2CValue::as_integer(aLStack416);
  uVar5 = lib::L2CValue::as_integer(aLStack432);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack400,fVar7);
  lib::L2CValue::L2CValue(aLStack80,10.0);
  lib::L2CValue::operator_(aLStack400,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = lib::L2CValue::operator__(aLStack384,(L2CValue *)auStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack384,_WN_LINK_BOOMERANG_TURN_WORK_INT_FOLLOW_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack384);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOOMERANG_TURN_WORK_INT_BACK_ROT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack384,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack384);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack384,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack384,aLStack400);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator__(aLStack384,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack400,0xf39cee014);
      lib::L2CValue::L2CValue(aLStack416,0x91d6c0a1b);
      uVar4 = lib::L2CValue::as_integer(aLStack400);
      uVar5 = lib::L2CValue::as_integer(aLStack416);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack400,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_WN_LINK_BOOMERANG_TURN_WORK_INT_BACK_ROT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack384);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)auStack368);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


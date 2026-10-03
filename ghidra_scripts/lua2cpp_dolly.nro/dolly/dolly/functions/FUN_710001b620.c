
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b620(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *this;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  code *pcVar8;
  L2CValue *this_00;
  float fVar9;
  float fVar10;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  this_00 = aLStack256;
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar5 = lib::L2CValue::operator==(param_3,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,true);
      uVar4 = lib::L2CValue::operator==(param_7,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack128);
        app::sv_kinetic_energy::enable(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack144,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack128);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        lib::L2CAgent::push_lua_stack(param_1,aLStack160);
        lib::L2CAgent::push_lua_stack(param_1,aLStack176);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        lib::L2CAgent::push_lua_stack(param_1,aLStack224);
        lib::L2CAgent::push_lua_stack(param_1,aLStack240);
        app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
    }
    lib::L2CValue::L2CValue(aLStack128,true);
    uVar4 = lib::L2CValue::operator==(param_4,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND_AIR);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,lVar6);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack144);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      HVar7 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar4 = lib::L2CValue::operator==(param_6,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) goto LAB_710001bbcc;
    pcVar8 = (code *)lib::L2CValue::as_pointer(param_6);
    (*pcVar8)(param_1);
  }
  else {
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,true);
    uVar4 = lib::L2CValue::operator==(param_4,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_INT_MOTION_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,lVar6);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,false);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar7 = lib::L2CValue::as_hash(aLStack144);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    else {
      HVar7 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (param_1->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar4 = lib::L2CValue::operator==(param_5,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) goto LAB_710001bbcc;
    pcVar8 = (code *)lib::L2CValue::as_pointer(param_5);
    (*pcVar8)(param_1);
    this_00 = aLStack192;
  }
  lib::L2CValue::~L2CValue(this_00);
LAB_710001bbcc:
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}


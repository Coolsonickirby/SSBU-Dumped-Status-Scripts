
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001a940(L2CFighterInkling *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  long lVar9;
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  fVar8 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710001afc0;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_REV_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1e-05);
  uVar5 = lib::L2CValue::operator<(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) goto LAB_710001aa98;
  }
  else {
LAB_710001aa98:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar5 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,fVar8);
      uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),uVar4);
      lib::L2CValue::operator-((L2CValue *)(auStack176 + 0x10),aLStack144);
      pLVar7 = aLStack192;
      lib::L2CValue::operator/(aLStack112,pLVar7);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_REV_DEGREE);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
  uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1e-05);
    uVar5 = lib::L2CValue::operator<(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::operator+(aLStack112,aLStack128);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
    }
  }
  else {
    lib::L2CValue::operator-(aLStack112,aLStack128);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator+(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::operator-(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  lVar9 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
  uVar4 = lib::L2CValue::as_number((L2CValue *)auStack176);
  local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar4;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator<(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
LAB_710001aed4:
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_EXIST_SQUID);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_HI_FALL);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x12f107b856);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_710001aed4;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_710001afc0:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}


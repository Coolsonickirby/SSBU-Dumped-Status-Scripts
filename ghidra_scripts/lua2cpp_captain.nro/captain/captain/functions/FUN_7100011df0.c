
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100011df0(L2CFighterCaptain *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  ulong *this_00;
  float fVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong auStack96 [2];
  ulong local_50;
  ulong uStack72;
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar4 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      if ((uVar4 & 1) != 0) goto LAB_7100011ef0;
    }
    iVar3 = 1;
    goto LAB_710001231c;
  }
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
LAB_7100011ef0:
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack96,_FIGHTER_CAPTAIN_FALCON_KICK_AA_TRANSITION_TERM_ID_INHERIT_FALL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((bVar2 & 1U) == 0) goto LAB_7100012314;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
LAB_7100012304:
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    this_00 = &local_50;
LAB_7100012310:
    lib::L2CValue::~L2CValue((L2CValue *)this_00);
  }
  else {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_7100012304;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      FUN_7100010c20(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x12aaf01d6d);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_50);
      fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,
                 _FIGHTER_CAPTAIN_FALCON_KICK_AA_TRANSITION_TERM_ID_INHERIT_FALL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,
                 _FIGHTER_CAPTAIN_FALCON_KICK_AA_TRANSITION_TERM_ID_LANDING_WAIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,
                 _FIGHTER_CAPTAIN_FALCON_KICK_AA_TRANSITION_TERM_ID_LANDING_FALL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_CAPTAIN_STATUS_WORK_ID_INT_FALCON_KICK_START_SITUATION);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) goto LAB_7100012314;
      lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      uVar4 = lib::L2CValue::as_number((L2CValue *)auStack96);
      lVar10 = lib::L2CValue::as_number(aLStack112);
      uVar9 = lib::L2CValue::as_number(aLStack144);
      local_50 = uVar4 & 0xffffffff | lVar10 << 0x20;
      uStack72 = (ulong)uVar9;
      app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&local_50,-1);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      this_00 = auStack96;
      goto LAB_7100012310;
    }
  }
LAB_7100012314:
  iVar3 = 0;
LAB_710001231c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


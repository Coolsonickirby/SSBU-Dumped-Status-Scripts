
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100018ad0(L2CFighterMiifighter *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ShieldStatus SVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator==(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_7100018bd0;
    }
    iVar3 = 1;
    goto LAB_7100019010;
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100018bd0:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  this_00 = &this->globalTable;
  if ((bVar2 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator==(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100018d98;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xb3ed78f27);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
LAB_7100018e74:
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
LAB_7100018d98:
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator==(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar8,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          FUN_7100018120(this);
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0xfc9458a10);
          HVar9 = lib::L2CValue::as_hash(aLStack80);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
          goto LAB_7100018e74;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_COUNTER_THROW_FLAG_SHIELD_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_COUNTER_THROW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NORMAL);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIFIGHTER_SHIELD_GROUP_KIND_SPECIAL_LW3_GUARD);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        SVar5 = lib::L2CValue::as_integer(aLStack96);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ShieldModule__set_status_impl(this->moduleAccessor,iVar3,SVar5,iVar6);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_COUNTER_THROW_FLAG_SHIELD_CHK);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_7100019000;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIFIGHTER_STATUS_COUNTER_THROW_FLAG_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack96,_SHIELD_STATUS_NONE);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIFIGHTER_SHIELD_GROUP_KIND_SPECIAL_LW3_GUARD);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        SVar5 = lib::L2CValue::as_integer(aLStack96);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ShieldModule__set_status_impl(this->moduleAccessor,iVar3,SVar5,iVar6);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_COUNTER_THROW_FLAG_SHIELD_CHK);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        goto LAB_7100019000;
      }
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    lib::L2CValue::~L2CValue(aLStack96);
LAB_7100019000:
    lib::L2CValue::~L2CValue(aLStack80);
  }
  iVar3 = 0;
LAB_7100019010:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000181b0(L2CFighterMiigunner *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::~L2CValue(aLStack112);
          goto LAB_710001823c;
        }
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar6 = aLStack112;
        goto LAB_7100018650;
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710001823c;
    }
    else {
      lib::L2CValue::~L2CValue(aLStack112);
LAB_710001823c:
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x1500c1d5d6);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
          goto LAB_7100018590;
        }
        lib::L2CValue::L2CValue(aLStack96,0x1500c1d5d6);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x11769c21c9);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0x11769c21c9);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          fVar8 = (float)lib::L2CValue::as_number(aLStack112);
          fVar9 = (float)lib::L2CValue::as_number(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
LAB_7100018590:
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
      pLVar6 = aLStack96;
LAB_7100018650:
      lib::L2CValue::~L2CValue(pLVar6);
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      iVar4 = 0;
      goto LAB_71000186d8;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIGUNNER_STATUS_KIND_SPECIAL_HI2_JUMP);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  iVar4 = 1;
LAB_71000186d8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}


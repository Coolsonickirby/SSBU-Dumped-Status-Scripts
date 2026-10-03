
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001c1f0(L2CFighterMiiswordsman *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_WORK_ID_INT_JET_STUB_START_SITUATION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIISWORDSMAN_STATUS_WORK_ID_FLAG_JET_STUB_CLIFF_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      this_00 = &this->globalTable;
      if ((bVar2 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
          GVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_WORK_ID_FLAG_JET_STUB_CLIFF_CHECK);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
LAB_710001c464:
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) goto LAB_710001c280;
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710001c280;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) goto LAB_710001c464;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        FUN_710001c150(this);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_TYPE_MOTION);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        FUN_710001c0b0(this);
      }
      goto LAB_710001c280;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710001c280;
    lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710001c280;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW3_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_LW3_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710001c280:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


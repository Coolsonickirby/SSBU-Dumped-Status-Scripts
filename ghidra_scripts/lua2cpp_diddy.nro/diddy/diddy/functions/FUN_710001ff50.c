
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001ff50(L2CFighterDiddy *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *this_00;
  float fVar9;
  undefined8 uVar10;
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
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar3 & 1U) != 0) {
    iVar5 = 1;
    goto LAB_710002067c;
  }
  bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar10 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__create
              (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack96,aLStack112);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)(cVar1 + -0x50));
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x25f9d6f0cc);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    uVar7 = lib::L2CValue::operator<(aLStack160,aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
LAB_71000204e4:
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_FALL_START);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar4 & 1));
      lib::L2CValue::operator!(aLStack160);
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar3 & 1U) != 0) {
        this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar7 = lib::L2CValue::operator<(this_00,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_FALL_START);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::~L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_FLAG_ROLL_COMP_START);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_HI_FALL_ROLL);
        lib::L2CValue::L2CValue(aLStack176,false);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar4 = lib::L2CValue::as_bool(aLStack176);
        bVar4 = app::lua_bind::StatusModule__change_status_request_impl
                          (this->moduleAccessor,iVar5,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_ALL);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar3 & 1U) == 0) goto LAB_71000204e4;
      lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_UP);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack160);
LAB_7100020274:
        lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_DOWN);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue(aLStack240,GROUND_TOUCH_FLAG_DOWN);
          lib::L2CValue::L2CValue(aLStack256,aLStack112);
          lib::L2CValue::L2CValue(aLStack272,0x23df1cb78b);
          FUN_7100020960(aLStack176,this,aLStack240,aLStack256,aLStack272);
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack176);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) goto LAB_710002066c;
        }
        lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_LEFT);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_LEFT);
          lib::L2CValue::L2CValue(aLStack304,aLStack112);
          lib::L2CValue::L2CValue(aLStack320,0x281bdfeb89);
          FUN_7100020960(aLStack176,this,aLStack288,aLStack304,aLStack320);
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack176);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) goto LAB_710002066c;
        }
        lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_RIGHT);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue(aLStack336,GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::L2CValue(aLStack352,aLStack112);
          lib::L2CValue::L2CValue(aLStack368,0x281bdfeb89);
          FUN_7100020960(aLStack176,this,aLStack336,aLStack352,aLStack368);
          bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack176);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((bVar3 & 1U) != 0) goto LAB_710002066c;
        }
        goto LAB_71000204e4;
      }
      lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_UP);
      lib::L2CValue::L2CValue(aLStack208,aLStack112);
      lib::L2CValue::L2CValue(aLStack224,0x23df1cb78b);
      FUN_7100020960(aLStack176,this,aLStack192,aLStack208,aLStack224);
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar3 & 1U) == 0) goto LAB_7100020274;
    }
LAB_710002066c:
    lVar2 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + -0x40))
    ;
    lib::L2CValue::~L2CValue(aLStack80);
    lVar2 = -0x80;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  iVar5 = 0;
LAB_710002067c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}


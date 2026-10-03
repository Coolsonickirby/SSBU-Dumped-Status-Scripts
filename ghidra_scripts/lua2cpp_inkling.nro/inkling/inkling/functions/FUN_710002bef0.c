
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710002bef0(L2CFighterInkling *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
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
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator<(aLStack96,pLVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    FUN_710001f950(this);
  }
  FUN_7100020d50(aLStack112,this);
  lib::L2CValue::~L2CValue(aLStack112);
  FUN_7100006390(aLStack128,this);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1549b47b66);
    lib::L2CValue::L2CValue(aLStack144,0x19457010b3);
    lib::L2CValue::L2CValue(aLStack160,true);
    FUN_710001cbc0(this,aLStack128,aLStack144,aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0xf3c6351ed);
    lib::L2CValue::L2CValue(aLStack144,0x1337fadc39);
    lib::L2CValue::L2CValue(aLStack160,true);
    FUN_710001cbc0(this,aLStack128,aLStack144,aLStack160);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_FALL);
  lib::L2CValue::L2CValue(aLStack208,false);
  FUN_710001d290(this,aLStack176,aLStack192,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_710002c140:
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710002c1d8;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710002c1d8;
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710002c140;
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710002c1d8:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    FUN_7100006390(aLStack224,this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack224,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack240,0x21a28ba08a);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack256,0x1e25068543);
        uVar6 = lib::L2CValue::as_integer(aLStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack256);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator=(aLStack224,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack224,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
      fVar8 = (float)lib::L2CValue::as_number(aLStack240);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x10);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack240,0x195d37c64c);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack256,0x1659d18f52);
        uVar6 = lib::L2CValue::as_integer(aLStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack256);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator=(aLStack224,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
      }
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack224,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
      fVar8 = (float)lib::L2CValue::as_number(aLStack240);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x10);
    }
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


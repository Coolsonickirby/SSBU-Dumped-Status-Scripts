
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100008b20(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CAgent *this_01;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_HI2_FLAG_REVERSE_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_HI2_FLAG_REVERSE_LR);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar5 = (L2CValue *)0x1a;
      this_01 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x1a);
      lib::L2CAgent::math_abs(this_01,pLVar5);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xaadffd255);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack96);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
      }
    }
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
LAB_7100008de4:
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) goto LAB_7100008e1c;
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) goto LAB_7100008e24;
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar3 = lib::L2CValue::operator==(pLVar5,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) goto LAB_7100008de4;
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::L2CValue(aLStack112,0xb9a9828b2);
      lib::L2CValue::L2CValue(aLStack128,0xf6d0a2d85);
      FUN_7100008540(this,aLStack80,aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      FUN_71000088e0(this);
      goto LAB_7100008e24;
    }
LAB_7100008e1c:
    pLVar5 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI2_RUSH);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar5);
LAB_7100008e24:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


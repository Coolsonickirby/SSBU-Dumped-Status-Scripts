
void __thiscall FUN_7100040260(L2CWeaponPacmanFirehydrant *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_01 = aLStack80;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(this_00,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,false);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      bVar1 = app::lua_bind::GroundModule__attach_ground_impl
                        (this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
      GVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
      this_01 = aLStack64;
    }
    lib::L2CValue::~L2CValue(this_01);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


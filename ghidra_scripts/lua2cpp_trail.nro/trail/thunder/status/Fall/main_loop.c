
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTrailThunder::status::Fall_main_loop(L2CWeaponTrailThunder *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *this_00;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_ALL);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  bVar3 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar5);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLOAT_FALL_START_SCALE)
    ;
    iVar6 = lib::L2CValue::as_integer(aLStack64);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xd4022630a);
    lib::L2CValue::L2CValue(aLStack112,0x6017d9eb2);
    uVar7 = lib::L2CValue::as_integer(aLStack64);
    uVar8 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLOAT_FALL_START_POS_Y);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack64,fVar9);
    fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    lib::L2CValue::operator_(aLStack64,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLAG_IS_REFLECT);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::operator_(aLStack112);
      lib::L2CValue::operator_(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xd4022630a);
      lib::L2CValue::L2CValue(aLStack144,0xe339b8ecf);
      uVar7 = lib::L2CValue::as_integer(aLStack64);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack160,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLAG_SET_NOT_GROUND_THROUGH);
      iVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112), (uVar7 & 1) != 0)) {
        lib::L2CValue::L2CValue(aLStack64,true);
        bVar3 = lib::L2CValue::as_bool(aLStack64);
        app::lua_bind::GroundModule__set_collidable_impl(this->moduleAccessor,(bool)(bVar3 & 1));
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLAG_SET_NOT_GROUND_THROUGH);
        iVar6 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      this_00 = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_TRAIL_THUNDER_STATUS_KIND_AIR_END);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x30),(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      this_00 = aLStack64;
    }
    lib::L2CValue::_L2CValue(this_00);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_TRAIL_THUNDER_STATUS_KIND_LANDING);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40))
    ;
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


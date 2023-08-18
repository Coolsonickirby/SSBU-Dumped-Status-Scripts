
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYounglink::status::Landing_main(L2CFighterYounglink *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lua2cpp::L2CFighterCommon::sub_landing_start_check_damage_face(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack192);
    lVar3 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,lVar3);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack80,0x11c0a0c60e);
    uVar2 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_LANDING_PREV_MOTION_FRAME);
      iVar1 = lib::L2CValue::as_integer(aLStack192);
      fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack208,0x13d04245bd);
      uVar2 = lib::L2CValue::as_integer(aLStack192);
      uVar4 = lib::L2CValue::as_integer(aLStack208);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::operator_(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator_(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack96,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack192,0xd07d69a9b);
      lib::L2CValue::L2CValue(aLStack208,0);
      uVar2 = lib::L2CValue::as_integer(aLStack192);
      uVar4 = lib::L2CValue::as_integer(aLStack208);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar4);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      uVar2 = lib::L2CValue::operator_(aLStack128,aLStack96);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::operator_(aLStack144,aLStack128);
      }
      else {
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LANDING_WORK_FLOAT_STIFFNESS_FRAME);
      fVar5 = (float)lib::L2CValue::as_number(aLStack192);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


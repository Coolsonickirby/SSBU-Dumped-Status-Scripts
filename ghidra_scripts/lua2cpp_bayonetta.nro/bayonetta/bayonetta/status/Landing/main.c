
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::Landing_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
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
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lua2cpp::L2CFighterCommon::sub_landing_start_check_damage_face(this);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_BATWITHIN);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack192,0x18c65c9c58);
      uVar3 = lib::L2CValue::as_integer(aLStack176);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack160,iVar1);
      fVar5 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack208,fVar5);
      lib::L2CValue::operator_(aLStack160,aLStack208);
      lib::L2CValue::L2CValue(aLStack80,0.01);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar2 = aLStack176;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0xd07d69a9b);
      lib::L2CValue::L2CValue(aLStack144,0);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar2 = aLStack128;
    }
    lib::L2CValue::_L2CValue(pLVar2);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LANDING_WORK_FLOAT_STIFFNESS_FRAME);
    fVar5 = (float)lib::L2CValue::as_number(aLStack128);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack80,Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


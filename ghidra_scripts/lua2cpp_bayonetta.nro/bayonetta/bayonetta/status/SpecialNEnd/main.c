
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialNEnd_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0xfd88ebd71);
  lib::L2CValue::L2CValue(aLStack176,0xf3f369076);
  FUN_710002b500(aLStack80,this,aLStack160,aLStack176);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0x13d31730a5);
  lib::L2CValue::L2CValue(aLStack208,0x1334af1da2);
  FUN_710002b500(aLStack80,this,aLStack192,aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_RATE);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x31b6af34a0);
  lib::L2CValue::L2CValue(aLStack256,0xfd88ebd71);
  lib::L2CValue::L2CValue(aLStack272,0xf3f369076);
  FUN_710002b500(aLStack240,this,aLStack256,aLStack272);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack240,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_END_CANCEL_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            (aLStack240,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_SPECIAL_LANDING_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::operator_(aLStack112,aLStack144);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack320,0x194bcd3d40);
    uVar3 = lib::L2CValue::as_integer(aLStack304);
    uVar4 = lib::L2CValue::as_integer(aLStack320);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack288,fVar5);
    lib::L2CValue::operator_(aLStack96,aLStack288);
    lib::L2CValue::L2CValue
              (aLStack352,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_END_CANCEL_FRAME)
    ;
    iVar1 = lib::L2CValue::as_integer(aLStack352);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack336,fVar5);
    lib::L2CValue::operator_(aLStack240,aLStack336);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack288,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_RATE)
    ;
    fVar5 = (float)lib::L2CValue::as_number(aLStack240);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack288);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue
            (aLStack240,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LANDING_FRAME);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


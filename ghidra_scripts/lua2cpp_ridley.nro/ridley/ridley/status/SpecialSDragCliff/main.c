
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDragCliff_main(L2CFighterRidley *this,L2CValue *return_value)

{
  int iVar1;
  GroundCorrectKind GVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_REVERT_DEGREE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710001d9c0(this);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  fVar4 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x14cd428870);
  lib::L2CValue::L2CValue(aLStack96,0x14cd428870);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,false);
  FUN_710001c840(this,aLStack80,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_TYPE_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  GVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  app::FighterRidleyLinkEventMotion::new_l2c_table();
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack64,0xee1f364bc);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xc3e3c1ede);
  lib::L2CValue::L2CValue(aLStack64,0x140e41a719);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,LINK_NO_CAPTURE);
  FUN_710001cf10(aLStack64,this,aLStack160,aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,SpecialSDragCliff_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::AttackAir_main(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar2 = app::lua_bind::ControlModule__get_attack_air_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_COMMAND_ATTACK_AIR_KIND_N);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_F);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_B);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_HI);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
          uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,0xd40042152);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,0xdde67d935);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0xc33f869bc);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xc3495ada5);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xc3a4e2597);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lua2cpp::L2CFighterCommon::sub_attack_air_common(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,AttackAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


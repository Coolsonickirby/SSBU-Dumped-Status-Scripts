
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialAirSD_end(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_D_HIT);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_WALL_END);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_D_LANDING);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_REUSE);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x1b1191a5a8);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x17f030d085);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_REUSE);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0x160d6126d6);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x123f975a99);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
      }
      goto LAB_71000191c8;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_AIR_S_FLAG_REUSE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x202ac11830);
    lib::L2CValue::operator_(aLStack96,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x1c1e0a6182);
    lib::L2CValue::operator_(aLStack96,aLStack80);
  }
LAB_71000191c8:
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack128,false);
  FUN_7100026a50(this,aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialSHoldEnd_check_atk
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack128,in_x1);
  lib::L2CValue::L2CValue(aLStack144,in_x2);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x81b51c4e0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_SHOOTING_ATTACK_ID_START);
  uVar4 = lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack80,COLLISION_KIND_SHIELD);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x5d6e20d24);
      lib::L2CValue::L2CValue(aLStack80,COLLISION_KIND_HIT);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100005d94;
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_GUARD_SPEED_MUL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLOAT_GUARD_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack80,fVar5);
        pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
        uVar4 = lib::L2CValue::operator__(aLStack80,pLVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_7100005d94;
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_GUARD_SPEED_MUL);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT_BEFORE_GUARD);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT_BEFORE_GUARD);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT_BEFORE_GUARD);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) goto LAB_7100005d94;
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLOAT_GUARD_FRAME);
      fVar5 = (float)lib::L2CValue::as_number(pLVar3);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_GUARD_SPEED_MUL);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100005d94:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


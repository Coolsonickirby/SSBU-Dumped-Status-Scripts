
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Attack4_main_loop(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this_01;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_01 = aLStack128;
  lib::L2CValue::L2CValue(aLStack96,true);
  FUN_710003b0e0(aLStack80,this,aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        this_00 = &this->globalTable;
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) != 0) goto LAB_710003acc8;
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) goto LAB_710003aeb8;
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar4 & 1) != 0) goto LAB_710003acd0;
      }
      else {
LAB_710003acc8:
        lib::L2CValue::_L2CValue(aLStack112);
LAB_710003acd0:
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack112,_WEAPON_KINETIC_TYPE_ROSETTA_TICO_MOTION_TRANS);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
LAB_710003aeb8:
          this_01 = aLStack112;
        }
        else {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x90);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x90);
          }
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue
                    (aLStack80,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_4_WORK_INT_SMASH_KIND);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack128,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_4_KIND_S);
          uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_4_KIND_LW);
            uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) != 0) goto LAB_710003af70;
            lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_ATTACK_4_KIND_HI);
            uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) goto LAB_710003afa0;
            lib::L2CValue::L2CValue
                      (aLStack80,_WEAPON_KINETIC_TYPE_ROSETTA_TICO_MOTION_TRANS_FREE_ATTACK);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          }
          else {
LAB_710003af70:
            lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_ROSETTA_TICO_FREE_ATTACK);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          this_01 = aLStack128;
        }
LAB_710003afa0:
        lib::L2CValue::_L2CValue(this_01);
      }
      iVar3 = 0;
      goto LAB_710003afac;
    }
    FUN_710002c5a0(this);
  }
  iVar3 = 1;
LAB_710003afac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}


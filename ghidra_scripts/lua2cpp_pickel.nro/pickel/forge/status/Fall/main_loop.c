
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelForge::status::Fall_main_loop(L2CWeaponPickelForge *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_FLAG_UPDATE_ATTACK);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar4 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_FLAG_REFLECT);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_7100099158;
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_INT_LANDING_NUM);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_INT_LANDING_NUM_PREV);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
      if ((uVar5 & 1) == 0) {
LAB_7100098f70:
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_FLAG_INIT_ATTACK);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack64,1);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::AttackModule__clear_impl(this->moduleAccessor,iVar2,false);
          lib::L2CValue::_L2CValue(aLStack64);
        }
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_FLAG_INIT_ATTACK);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_INT_LANDING_NUM_PREV);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,1);
        uVar5 = lib::L2CValue::operator_(aLStack64,aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_GAME);
          lib::L2CValue::L2CValue(aLStack112,0xfa7e751b6);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          HVar6 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                    (this->moduleAccessor,iVar2,HVar6,-1);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_GAME);
          lib::L2CValue::L2CValue(aLStack112,0x1397d77a71);
          iVar2 = lib::L2CValue::as_integer(aLStack64);
          HVar6 = lib::L2CValue::as_hash(aLStack112);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                    (this->moduleAccessor,iVar2,HVar6,-1);
        }
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_FORGE_INSTANCE_WORK_ID_FLAG_INIT_ATTACK);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) goto LAB_7100098f70;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar4 = aLStack80;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PICKEL_FORGE_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = aLStack64;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_7100099158:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::FinalAttack_check_atk
          (L2CFighterMetaknight *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *this_00;
  L2CValue *this_01;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack176,in_x1);
  lib::L2CValue::L2CValue(aLStack192,in_x2);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa854977fe);
  uVar1 = lib::L2CValue::as_integer(pLVar5);
  uVar1 = app::sv_battle_object::category(uVar1);
  lib::L2CValue::L2CValue(aLStack112,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack96,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack96,COLLISION_KIND_HIT);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x3a4b90435);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x6c2b55593);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa854977fe);
      uVar1 = lib::L2CValue::as_integer(this_01);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar1);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar7);
      }
      iVar2 = lib::L2CValue::as_integer(pLVar5);
      iVar3 = lib::L2CValue::as_integer(this_00);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      iVar2 = app::lua_bind::HitModule__get_status_impl(pBVar8,iVar2,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_NORMAL);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_FINAL_FLAG_ATTACK_HIT_LINK);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_SUM);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        if (-1 < iVar2) {
          iVar3 = -1;
          do {
            lib::L2CValue::L2CValue
                      (aLStack128,
                       iVar3 + _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_START + 1);
            iVar4 = lib::L2CValue::as_integer(aLStack128);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::L2CValue(aLStack96,iVar4);
            lib::L2CValue::_L2CValue(aLStack128);
            pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa854977fe);
            uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              pLVar5 = aLStack96;
              goto LAB_7100002ea8;
            }
            lib::L2CValue::_L2CValue(aLStack96);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_NUM);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack128,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::operator_(aLStack112,aLStack128);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_FINAL_TARGET_NUM_MAX);
        uVar6 = lib::L2CValue::operator_(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar6 & 1) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa854977fe);
          iVar2 = _FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_TARGET_ID_START;
          lib::L2CValue::operator_(aLStack112,aLStack128);
          lib::L2CValue::L2CValue(aLStack96,iVar2);
          lib::L2CValue::operator_(aLStack96,aLStack160);
          lib::L2CValue::_L2CValue(aLStack96);
          iVar2 = lib::L2CValue::as_integer(pLVar5);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::L2CValue
                    (aLStack144,_FIGHTER_METAKNIGHT_STATUS_FINAL_WORK_INT_FINAL_HIT_NUM);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::WorkModule__add_int_impl(this->moduleAccessor,iVar2,iVar3);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        pLVar5 = aLStack128;
LAB_7100002ea8:
        lib::L2CValue::_L2CValue(pLVar5);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}


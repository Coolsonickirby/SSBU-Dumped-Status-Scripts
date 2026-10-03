
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021af0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
LAB_7100021c30:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
LAB_7100021cd8:
      bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack176,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
          lib::L2CValue::~L2CValue(aLStack176);
          pLVar6 = aLStack160;
          goto LAB_7100021d74;
        }
      }
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        this = &param_2->globalTable;
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::~L2CValue(aLStack96);
            goto LAB_7100021dd4;
          }
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          pLVar6 = aLStack96;
          goto LAB_7100021f74;
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) goto LAB_7100021dd4;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack96);
LAB_7100021dd4:
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
          GVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar3);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar4);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
          GVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar3);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar4);
        }
        pLVar6 = aLStack80;
LAB_7100021f74:
        lib::L2CValue::~L2CValue(pLVar6);
      }
      iVar4 = 0;
      goto LAB_7100021f80;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100021cd8;
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar6 = aLStack128;
LAB_7100021d74:
    lib::L2CValue::~L2CValue(pLVar6);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
LAB_7100021bd4:
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_2);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) goto LAB_7100021d78;
      }
      goto LAB_7100021c30;
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_2,(L2CValue)0x90);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_7100021bd4;
  }
LAB_7100021d78:
  iVar4 = 1;
LAB_7100021f80:
  lib::L2CValue::L2CValue(param_1,iVar4);
  return;
}


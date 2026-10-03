
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008490(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  FighterModuleAccessor *pFVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar8 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,5);
  pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar5);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::LinkModule__is_link_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      app::LinkEvent::new_l2c_table();
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x39ab74e206);
      lib::L2CValue::operator=(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0xaa79e68a2);
      lib::L2CValue::operator=(pLVar7,pLVar4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      FUN_7100008280(aLStack128,param_1,aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
      lib::L2CValue::operator=(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW;
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0xc21b85cd4);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::operator=(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar8,3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0xaa79e68a2);
      lib::L2CValue::operator=(pLVar7,pLVar4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_LINK_NO_PIKMIN);
      FUN_7100008280(aLStack144,param_1,aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,5);
    pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    app::FighterSpecializer_Pikmin::reduce_pikmin_all(pFVar5);
  }
  return;
}


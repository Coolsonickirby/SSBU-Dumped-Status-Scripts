
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003d530(long param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar7 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL2_FALL);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL2_LANDING);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL2_AIR_END);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
        uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_FINAL);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          bVar1 = app::lua_bind::LinkModule__is_linked_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            app::LinkEvent::new_l2c_table();
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack80,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack64,0xca6184e65);
            lib::L2CValue::operator=(pLVar5,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_NO_FINAL);
            FUN_710003db20(aLStack64,param_1,aLStack96,aLStack80);
            lib::L2CValue::operator=(aLStack80,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_INVISIBLE_STAGE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
          lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,5);
            lib::L2CValue::L2CValue(aLStack64,true);
            lib::L2CValue::L2CValue(aLStack80,true);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
            bVar1 = lib::L2CValue::as_bool(aLStack64);
            bVar3 = lib::L2CValue::as_bool(aLStack80);
            app::FighterSpecializer_Ryu::set_final_stage_disp_status
                      (pBVar8,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack64);
          }
          lib::L2CValue::L2CValue(aLStack112,true);
          FUN_710003dc20(param_1,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
        }
      }
    }
  }
  return;
}


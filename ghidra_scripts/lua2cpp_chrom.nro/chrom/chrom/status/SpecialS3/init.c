
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterChrom::status::SpecialS4_init(L2CFighterChrom *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  L2CValue *pLVar4;
  L2CValue *this_00;
  ulong uVar5;
  ulong uVar6;
  ulong *this_01;
  BattleObjectModuleAccessor *pBVar7;
  KineticEnergy *pKVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong local_e0;
  undefined8 uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  ppBVar9 = &this->moduleAccessor;
  pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue(aLStack112,pvVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue(aLStack128,pvVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue(aLStack144,pvVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar12 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar12);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar12 >> 0x20));
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_e0);
  lib::L2CValue::operator_(this_00,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack240,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack256,pLVar4);
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack272,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar5 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S2);
    uVar5 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S3);
      uVar5 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_ROY_STATUS_KIND_SPECIAL_S4);
        uVar5 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        if ((uVar5 & 1) == 0) goto LAB_710000b1c4;
        iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack288,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          lib::L2CValue::L2CValue(aLStack368,0.0);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar1 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack304);
          uVar11 = lib::L2CValue::as_number(aLStack320);
          local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
          uStack216 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack336);
          lVar13 = lib::L2CValue::as_number(aLStack352);
          uVar11 = lib::L2CValue::as_number(aLStack368);
          local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack88 = (ulong)uVar11;
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
          app::lua_bind::KineticEnergy__enable_impl(pKVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack288,ENERGY_STOP_RESET_TYPE_AIR);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar1 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack240);
          uVar11 = lib::L2CValue::as_number(aLStack304);
          local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
          uStack216 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack320);
          lVar13 = lib::L2CValue::as_number(aLStack336);
          uVar11 = lib::L2CValue::as_number(aLStack352);
          local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack88 = (ulong)uVar11;
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
          app::lua_bind::KineticEnergy__enable_impl(pKVar8);
          lib::L2CValue::L2CValue(aLStack288,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar1 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack304);
          uVar11 = lib::L2CValue::as_number(aLStack256);
          local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
          uStack216 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack320);
          lVar13 = lib::L2CValue::as_number(aLStack336);
          uVar11 = lib::L2CValue::as_number(aLStack352);
          local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack88 = (ulong)uVar11;
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
          app::lua_bind::KineticEnergy__enable_impl(pKVar8);
        }
        iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar1);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_ROY_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar1,iVar2);
      }
      else {
        iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack288,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          lib::L2CValue::L2CValue(aLStack368,0.0);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar1 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack304);
          uVar11 = lib::L2CValue::as_number(aLStack320);
          local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
          uStack216 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack336);
          lVar13 = lib::L2CValue::as_number(aLStack352);
          uVar11 = lib::L2CValue::as_number(aLStack368);
          local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack88 = (ulong)uVar11;
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
          app::lua_bind::KineticEnergy__enable_impl(pKVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
          lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
          app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack288,ENERGY_STOP_RESET_TYPE_AIR);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar1 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack240);
          uVar11 = lib::L2CValue::as_number(aLStack304);
          local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
          uStack216 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack320);
          lVar13 = lib::L2CValue::as_number(aLStack336);
          uVar11 = lib::L2CValue::as_number(aLStack352);
          local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack88 = (ulong)uVar11;
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
          app::lua_bind::KineticEnergy__enable_impl(pKVar8);
          lib::L2CValue::L2CValue(aLStack288,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          iVar1 = lib::L2CValue::as_integer(aLStack288);
          uVar5 = lib::L2CValue::as_number(aLStack304);
          uVar11 = lib::L2CValue::as_number(aLStack256);
          local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
          uStack216 = 0;
          uVar5 = lib::L2CValue::as_number(aLStack320);
          lVar13 = lib::L2CValue::as_number(aLStack336);
          uVar11 = lib::L2CValue::as_number(aLStack352);
          local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack88 = (ulong)uVar11;
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
          app::lua_bind::KineticEnergy__reset_energy_impl
                    (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
          app::lua_bind::KineticEnergy__enable_impl(pKVar8);
        }
        iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar1);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_ROY_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar1,iVar2);
      }
    }
    else {
      iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,ENERGY_STOP_RESET_TYPE_AIR);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        iVar1 = lib::L2CValue::as_integer(aLStack288);
        uVar5 = lib::L2CValue::as_number(aLStack240);
        uVar11 = lib::L2CValue::as_number(aLStack304);
        local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
        uStack216 = 0;
        uVar5 = lib::L2CValue::as_number(aLStack320);
        lVar13 = lib::L2CValue::as_number(aLStack336);
        uVar11 = lib::L2CValue::as_number(aLStack352);
        local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
        uStack88 = (ulong)uVar11;
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
        pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::KineticEnergy__reset_energy_impl
                  (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::KineticEnergy__enable_impl(pKVar8);
        lib::L2CValue::L2CValue(aLStack288,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        iVar1 = lib::L2CValue::as_integer(aLStack288);
        uVar5 = lib::L2CValue::as_number(aLStack304);
        uVar11 = lib::L2CValue::as_number(aLStack256);
        local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
        uStack216 = 0;
        uVar5 = lib::L2CValue::as_number(aLStack320);
        lVar13 = lib::L2CValue::as_number(aLStack336);
        uVar11 = lib::L2CValue::as_number(aLStack352);
        local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
        uStack88 = (ulong)uVar11;
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
        pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
        app::lua_bind::KineticEnergy__reset_energy_impl
                  (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
        app::lua_bind::KineticEnergy__enable_impl(pKVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
        app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar1);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_ROY_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar1,iVar2);
    }
  }
  else {
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack288,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS_IGNORE_NORMAL);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar1 = lib::L2CValue::as_integer(aLStack288);
      uVar5 = lib::L2CValue::as_number(aLStack304);
      uVar11 = lib::L2CValue::as_number(aLStack320);
      local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack216 = 0;
      uVar5 = lib::L2CValue::as_number(aLStack336);
      lVar13 = lib::L2CValue::as_number(aLStack352);
      uVar11 = lib::L2CValue::as_number(aLStack368);
      local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
      uStack88 = (ulong)uVar11;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
      app::lua_bind::KineticEnergy__enable_impl(pKVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack288,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack304,0xfc5119f75);
      uVar5 = lib::L2CValue::as_integer(aLStack288);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_e0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack288,0x96af39085);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,fVar10);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
        lib::L2CValue::_L2CValue(aLStack288);
        this_01 = &local_60;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
        lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_e0);
        this_01 = &local_e0;
      }
      lib::L2CValue::_L2CValue((L2CValue *)this_01);
      lib::L2CValue::L2CValue(aLStack288,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar1 = lib::L2CValue::as_integer(aLStack288);
      uVar5 = lib::L2CValue::as_number(aLStack240);
      uVar11 = lib::L2CValue::as_number(aLStack304);
      local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack216 = 0;
      uVar5 = lib::L2CValue::as_number(aLStack320);
      lVar13 = lib::L2CValue::as_number(aLStack336);
      uVar11 = lib::L2CValue::as_number(aLStack352);
      local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
      uStack88 = (ulong)uVar11;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergy__enable_impl(pKVar8);
      lib::L2CValue::L2CValue(aLStack288,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      iVar1 = lib::L2CValue::as_integer(aLStack288);
      uVar5 = lib::L2CValue::as_number(aLStack304);
      uVar11 = lib::L2CValue::as_number(aLStack256);
      local_e0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack216 = 0;
      uVar5 = lib::L2CValue::as_number(aLStack320);
      lVar13 = lib::L2CValue::as_number(aLStack336);
      uVar11 = lib::L2CValue::as_number(aLStack352);
      local_60 = uVar5 & 0xffffffff | lVar13 << 0x20;
      uStack88 = (ulong)uVar11;
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergy__reset_energy_impl
                (pKVar8,iVar1,(Vector2f *)&local_e0,(Vector3f *)&local_60,pBVar7);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pKVar8 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergy__enable_impl(pKVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,iVar1);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_ROY_STATUS_SPECIAL_S_WORK_INT_SITUATION_PREV);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar1,iVar2);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
LAB_710000b1c4:
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


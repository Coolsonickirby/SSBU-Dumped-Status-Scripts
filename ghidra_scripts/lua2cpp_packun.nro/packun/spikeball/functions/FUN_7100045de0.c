
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100045de0(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CTable *this;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined8 auStack256 [2];
  undefined8 auStack240 [2];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [24];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  ppBVar12 = &param_1->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack120,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,0);
  lib::L2CValue::L2CValue(aLStack136,this);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x162d277af);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar8);
  lib::L2CValue::L2CValue(aLStack176,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar8[2]);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_c0);
  lib::L2CValue::operator=(pLVar6,aLStack176);
  lib::L2CValue::operator=(pLVar7,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0xf679aaf13);
  lib::L2CValue::L2CValue(aLStack224,0x1ffb5da8b3);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  uVar10 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_FLAG_FOLLOW_X);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue(aLStack224);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_X_START);
    lib::L2CValue::operator+((L2CValue *)&local_c0,aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1);
    lib::L2CValue::operator-(aLStack272,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar13);
    lib::L2CValue::L2CValue
              (aLStack288,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_FLOAT_DIFF_X_FROM_FOUNDER);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar13);
    lib::L2CValue::operator+((L2CValue *)auStack240,(L2CValue *)&local_c0);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x18cdc1683);
    lib::L2CValue::operator=(pLVar5,aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0xf679aaf13);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0x1e400ccf3a);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack240,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_FLAG_FOLLOW_UP_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_Y_START);
    lib::L2CValue::operator+((L2CValue *)&local_c0,aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1);
    lib::L2CValue::operator-(aLStack272,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar13);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_Y_START);
    lib::L2CValue::operator+((L2CValue *)&local_c0,aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar13);
    lib::L2CValue::~L2CValue(aLStack272);
    uVar9 = lib::L2CValue::operator<((L2CValue *)auStack256,(L2CValue *)auStack240);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_UP);
      lib::L2CValue::L2CValue
                (aLStack272,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack240,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_FLAG_FOLLOW_DOWN_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack256,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_NONE);
    uVar9 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack240,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_Y_START)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar13);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack256,
                 _WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_Y_START + 1);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar13);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      uVar9 = lib::L2CValue::operator<((L2CValue *)&local_c0,(L2CValue *)auStack240);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_PACKUN_SPIKEBALL_UD_DOWN);
        lib::L2CValue::L2CValue
                  (aLStack272,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        iVar4 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack256,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_UP);
  uVar9 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack256,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_DOWN);
    uVar9 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    if ((uVar9 & 1) == 0) goto LAB_7100046aa4;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x1fbdb2615);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack240,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_FLOAT_DOWN_LOWER_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar13);
    uVar9 = lib::L2CValue::operator<((L2CValue *)&local_c0,pLVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_NONE);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack240,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_c0);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_c0);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,-1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,-1.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_c0);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,-1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,-1.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_c0);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack240,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_FLOAT_DOWN_LOWER_Y
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar13);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_c0);
      puVar11 = &local_c0;
      goto LAB_7100046a98;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_DOWN);
    uVar9 = lib::L2CValue::operator==(aLStack120,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    if ((uVar9 & 1) != 0) goto LAB_7100046aa4;
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0xf679aaf13);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0x7b9905530);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar9,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar13);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0xf679aaf13);
    lib::L2CValue::L2CValue(aLStack272,0xbf34bdeb7);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    uVar10 = lib::L2CValue::as_integer(aLStack272);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar9,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar13);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::operator-((L2CValue *)&local_c0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack272);
    lib::L2CAgent::push_lua_stack(param_1,aLStack288);
    app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack272);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack272,-1.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack272);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
    app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    puVar11 = &local_c0;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_Y_START);
    lib::L2CValue::operator+((L2CValue *)&local_c0,aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1);
    lib::L2CValue::operator-(aLStack272,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar13);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_INSTANCE_WORK_ID_FLOAT_POS_Y_START);
    lib::L2CValue::operator+((L2CValue *)&local_c0,aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar13);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::operator-((L2CValue *)auStack240,(L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
    uVar9 = lib::L2CValue::operator<((L2CValue *)&local_c0,aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_PACKUN_SPIKEBALL_UD_NONE);
      lib::L2CValue::L2CValue
                (aLStack288,_WEAPON_PACKUN_SPIKEBALL_STATUS_LOOP_WORK_INT_UPDOWN_STATUS);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
      iVar4 = lib::L2CValue::as_integer(aLStack288);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_c0);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack304);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_c0);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue(aLStack272);
    puVar11 = auStack256;
LAB_7100046a98:
    lib::L2CValue::~L2CValue((L2CValue *)puVar11);
    puVar11 = auStack240;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar11);
LAB_7100046aa4:
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack136,0x162d277af);
  uVar14 = lib::L2CValue::as_number(pLVar5);
  uVar15 = lib::L2CValue::as_number(pLVar6);
  uVar16 = lib::L2CValue::as_number(pLVar7);
  local_c0 = CONCAT44(uVar15,uVar14);
  uStack184 = (ulong)uVar16;
  app::lua_bind::PostureModule__set_pos_impl(*ppBVar12,(Vector3f *)&local_c0);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack120);
  return;
}

